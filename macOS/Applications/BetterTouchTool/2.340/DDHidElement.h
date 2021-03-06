//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DDHidUsage, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface DDHidElement : NSObject
{
    NSDictionary *mProperties;
    DDHidUsage *mUsage;
    NSArray *mElements;
}

+ (id)elementWithProperties:(id)arg1;
+ (id)elementsWithPropertiesArray:(id)arg1;
- (long long)compareByUsage:(id)arg1;
- (long long)minValue;
- (long long)maxValue;
- (BOOL)isWrapping;
- (BOOL)isRelative;
- (BOOL)isArray;
- (BOOL)hasPreferredState;
- (BOOL)hasNullState;
- (id)name;
- (id)elements;
- (id)usage;
- (unsigned int)cookieAsUnsigned;
- (unsigned int)cookie;
- (id)description;
- (id)stringForKey:(id)arg1;
- (id)properties;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;

@end

