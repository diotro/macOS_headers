//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLgNonretainerArray, NSArray;

@interface CLgWindowListCache : NSObject
{
    long long lastNumberListCount;
    NSArray *lastNumberList;
    long long provNumberListCount;
    NSArray *provNumberList;
    CLgNonretainerArray *sortedWindowRefs;
}

- (id)sortedWindows;
- (BOOL)sortedWindowsChanged;
- (void)dealloc;
- (id)init;

@end

