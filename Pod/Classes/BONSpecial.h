//
//  BONSpecial.h
//  BonMot
//
//  Created by Zev Eisenberg on 7/16/15.
//

// clang-format off
// This file is auto-generated by scripts/BONSpecialGenerator.swift. Please do not edit it by hand.
#import <Foundation/Foundation.h>

#import "BONCompatibility.h"

BON_ASSUME_NONNULL_BEGIN

@interface BONSpecial : NSObject

typedef NS_ENUM(unichar, BONCharacter) {
    BONCharacterTab = 0x0009,
    BONCharacterLineFeed = 0x000A,
    BONCharacterVerticalTab = 0x000B,
    BONCharacterFormFeed = 0x000C,
    BONCharacterCarriageReturn = 0x000D,
    BONCharacterSpace = 0x0020,
    BONCharacterNextLine = 0x0085,
    BONCharacterNoBreakSpace = 0x00A0,
    BONCharacterEnSpace = 0x2002,
    BONCharacterEmSpace = 0x2003,
    BONCharacterFigureSpace = 0x2007,
    BONCharacterThinSpace = 0x2009,
    BONCharacterHairSpace = 0x200A,
    BONCharacterZeroWidthSpace = 0x200B,
    BONCharacterNonBreakingHyphen = 0x2011,
    BONCharacterFigureDash = 0x2012,
    BONCharacterEnDash = 0x2013,
    BONCharacterEmDash = 0x2014,
    BONCharacterHorizontalEllipsis = 0x2026,
    BONCharacterLineSeparator = 0x2028,
    BONCharacterParagraphSeparator = 0x2029,
    BONCharacterNarrowNoBreakSpace = 0x202F,
    BONCharacterWordJoiner = 0x2060,
    BONCharacterMinusSign = 0x2212,
    BONCharacterObjectReplacementCharacter = 0xFFFC,
};

+ (NSString *)tab;
+ (NSString *)lineFeed;
+ (NSString *)verticalTab;
+ (NSString *)formFeed;
+ (NSString *)carriageReturn;
+ (NSString *)space;
+ (NSString *)nextLine;
+ (NSString *)noBreakSpace;
+ (NSString *)enSpace;
+ (NSString *)emSpace;
+ (NSString *)figureSpace;
+ (NSString *)thinSpace;
+ (NSString *)hairSpace;
+ (NSString *)zeroWidthSpace;
+ (NSString *)nonBreakingHyphen;
+ (NSString *)figureDash;
+ (NSString *)enDash;
+ (NSString *)emDash;
+ (NSString *)horizontalEllipsis;
+ (NSString *)lineSeparator;
+ (NSString *)paragraphSeparator;
+ (NSString *)narrowNoBreakSpace;
+ (NSString *)wordJoiner;
+ (NSString *)minusSign;
+ (NSString *)objectReplacementCharacter;

+ (BONGeneric(NSDictionary, NSNumber *, NSString *) *)humanReadableStringDictionary;

@end

BON_ASSUME_NONNULL_END

// clang-format on
