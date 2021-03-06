//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleFactory-Protocol.h>

@class FCArticleController, NSString;

@interface NUANFArticleFactory : NSObject <NUArticleFactory>
{
    long long _qualityOfService;
    long long _relativePriority;
    FCArticleController *_articleController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FCArticleController *articleController; // @synthesize articleController=_articleController;
@property(nonatomic) long long relativePriority; // @synthesize relativePriority=_relativePriority;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
- (id)createArticlesForArticleIDs:(id)arg1;
- (id)initWithArticleController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

