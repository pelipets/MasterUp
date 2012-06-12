//
//  CustomCell.h
//  CellDemo
//
//  Created by Mac on 12.06.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomCell : UITableViewCell

@property (retain, nonatomic) IBOutlet UILabel *firstName;
@property (retain, nonatomic) IBOutlet UILabel *lastName;
@property (retain, nonatomic) IBOutlet UIImageView *photo;
@end
