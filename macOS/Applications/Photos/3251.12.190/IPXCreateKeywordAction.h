//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXKeywordManagerAction.h"

@class IPXKeyword, NSString;

@interface IPXCreateKeywordAction : IPXKeywordManagerAction
{
    IPXKeyword *_keyword;
    BOOL _hasBeenCreated;
    NSString *_keywordName;
}

@property(retain, nonatomic) NSString *keywordName; // @synthesize keywordName=_keywordName;
- (void).cxx_destruct;
- (id)defaultActionNameLocalizationKey;
- (int)performRedo;
- (int)performUndo;
- (int)performAction;
- (void)_addOrDelete;

@end

