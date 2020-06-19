//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//  Licensed under the MIT License.
//

#import <Foundation/Foundation.h>

@class UITraitCollection;

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (DarkModeKitSwizzling)

+ (void)swizzleTraitCollectionDidChangeToDMTraitCollectionDidChange API_AVAILABLE(ios(13.0));

@end

NS_ASSUME_NONNULL_END
