//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@interface OSIRebuildCachesElement : OSIInstallQueueElement
{
}

- (double)estimatedTimeToComplete;
- (id)localizedStatusString;
- (id)operationName;
- (BOOL)_migrateMasterBOMReturningError:(id *)arg1;
- (BOOL)_triggerRebuildOfXPCServiceCacheOnNextRebootReturningError:(id *)arg1;
- (BOOL)_triggerRebuildOfDYLDSharedCacheReturningError:(id *)arg1;
- (BOOL)runReturningError:(id *)arg1;

@end

