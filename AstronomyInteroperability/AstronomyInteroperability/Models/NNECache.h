//
//  NNECache.h
//  AstronomyInteroperability
//
//  Created by Nonye on 7/21/20.
//  Copyright © 2020 Nonye Ezekwo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NNECache : NSObject

@property NSObject *value;

- (_Nullable id)valueForKey:(NSString *)key;
- (void)cacheValue:(id)value forKey:(NSString *)key;
- (void)clear;

- (instancetype)initWithKey:(NSString *)key value:(id)value;


@end

NS_ASSUME_NONNULL_END
