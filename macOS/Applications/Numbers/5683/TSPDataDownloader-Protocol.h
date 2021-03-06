//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, NSURL, TSPData, TSPDataDownloaderConfiguration, TSPObjectContext;
@protocol OS_dispatch_queue;

@protocol TSPDataDownloader <NSObject>
+ (double)defaultSynchronousDownloadTimeout;
+ (BOOL)defaultShouldAttemptToDownloadSynchronously;
- (void)cancel;
- (void)retryDownloadForData:(TSPData *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(TSPData *, NSURLResponse *, NSError *))arg3;
- (TSPData *)downloadDataWithFilename:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(TSPData *, NSURLResponse *, NSError *))arg3;
- (id)initWithContext:(TSPObjectContext *)arg1 downloadURL:(NSURL *)arg2 configuration:(TSPDataDownloaderConfiguration *)arg3;
@end

