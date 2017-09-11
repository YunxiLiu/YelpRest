//
//  YelpDataStore.h
//  YelpStudy
//
//  Created by Yunxi Liu on 7/8/17.
//  Copyright © 2017 Yunxi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YelpDataModel.h"

@import CoreLocation;

@interface YelpDataStore : NSObject

@property (nonatomic, copy) NSArray <YelpDataModel *> *dataModels;
@property (nonatomic) CLLocation *userLocation;

+ (YelpDataStore *)sharedInstance;

@end
