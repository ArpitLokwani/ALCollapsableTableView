//
//  ALCustomColoredAccessory.h
//  ALCollapsableTableView
//
//  Created by Arpit Lokwani on 5/1/15.
//  Copyright (c) 2015 Arpit Lokwani. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum
{
    ALCustomColoredAccessoryTypeRight = 0,
    ALCustomColoredAccessoryTypeUp,
    ALCustomColoredAccessoryTypeDown
} ALCustomColoredAccessoryType;

@interface ALCustomColoredAccessory : UIControl
{
    UIColor *_accessoryColor;
    UIColor *_highlightedColor;
    
    ALCustomColoredAccessoryType _type;
}

@property (nonatomic, retain) UIColor *accessoryColor;
@property (nonatomic, retain) UIColor *highlightedColor;

@property (nonatomic, assign)  ALCustomColoredAccessoryType type;

+ (ALCustomColoredAccessory *)accessoryWithColor:(UIColor *)color type:(ALCustomColoredAccessoryType)type;

@end