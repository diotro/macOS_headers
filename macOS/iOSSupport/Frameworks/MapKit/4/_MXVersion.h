//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _MXVersion : NSObject
{
    NSArray *_components;
}

@property(readonly, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithVersionString:(id)arg1;
- (id)initWithComponents:(id)arg1;
- (id)init;

@end

