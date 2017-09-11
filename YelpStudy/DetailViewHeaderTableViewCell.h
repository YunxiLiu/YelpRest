//
//  DetailViewHeaderTableViewCell.h
//  YelpStudy
//
//  Created by Yunxi Liu on 7/9/17.
//  Copyright © 2017 Yunxi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface DetailViewHeaderTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end
