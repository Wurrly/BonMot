//
//  AbstractCell.h
//  BonMot
//
//  Created by Zev Eisenberg on 4/20/15.
//  Copyright © 2015 Zev Eisenberg. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <BonMot/BonMot.h>

#import <BonMot/BonMot+UIKit.h>

@interface AbstractCell : UITableViewCell

+ (NSString *)title;

+ (NSString *)reuseIdentifier;

+ (UIColor *)raizlabsRed;

@end
