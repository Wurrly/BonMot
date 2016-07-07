//
//  NSDictionary+BONEquality.h
//  BonMot
//
//  Created by Zev Eisenberg on 7/11/15.
//  Copyright © 2015 Zev Eisenberg. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BonMot/BonMot.h>

#import <CoreGraphics/CoreGraphics.h>

OBJC_EXTERN const double kBONDoubleEpsilon;
OBJC_EXTERN BOOL BONDoublesCloseEnough(double float1, double float2);

@interface BONGenericDict (BONEquality)

- (BOOL)bon_isCloseEnoughEqualToDictionary:(BONNullable BONGenericDict *)dictionary;

@end
