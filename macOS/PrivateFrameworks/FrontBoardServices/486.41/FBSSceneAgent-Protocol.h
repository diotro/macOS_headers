//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSSceneEvent;
@protocol FBSSceneHandle;

@protocol FBSSceneAgent <NSObject>
- (void)scene:(id <FBSSceneHandle>)arg1 handleEvent:(FBSSceneEvent *)arg2 withCompletion:(void (^)(FBSSceneMessage *))arg3;
- (void)scene:(id <FBSSceneHandle>)arg1 reviewEvent:(FBSSceneEvent *)arg2 withCompletion:(void (^)(void (^)(FBSSceneMessage *, NSError *)))arg3;
- (void)scene:(id <FBSSceneHandle>)arg1 willInvalidateWithEvent:(FBSSceneEvent *)arg2 completion:(void (^)(void))arg3;
- (void)scene:(id <FBSSceneHandle>)arg1 didInitializeWithEvent:(FBSSceneEvent *)arg2 completion:(void (^)(void))arg3;
@end

