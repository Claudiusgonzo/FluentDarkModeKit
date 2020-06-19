//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//  Licensed under the MIT License.
//

#import "DMTraitCollection.h"

NS_ASSUME_NONNULL_BEGIN

@interface DMTraitCollection (DarkModeKitSwizzling)

+ (void)swizzleUIScreenTraitCollectionDidChange API_AVAILABLE(ios(13.0));

@end

NS_ASSUME_NONNULL_END
