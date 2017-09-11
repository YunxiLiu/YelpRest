//
//  MapTableViewCell.h
//  YelpStudy
//
//  Created by Yunxi Liu on 7/10/17.
//  Copyright © 2017 Yunxi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"
#import "YelpAnnotation.h"

@interface MapTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end
