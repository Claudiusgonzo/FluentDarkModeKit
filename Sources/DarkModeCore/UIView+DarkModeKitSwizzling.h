//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//  Licensed under the MIT License.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (DarkModeKitSwizzling)

+ (void)dm_swizzleSetBackgroundColor;
+ (void)dm_swizzleSetTintColor;

@end

NS_ASSUME_NONNULL_END
