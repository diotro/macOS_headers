//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class SSAccount, UIViewController;

@interface FAFamilySettings : FAFamilyCircleRequest
{
    BOOL _isFirstRun;
    UIViewController *_presentingViewController;
    SSAccount *_iTunesAccount;
}

@property BOOL isFirstRun; // @synthesize isFirstRun=_isFirstRun;
@property(retain) SSAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
@property UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)_launchPrefsUsingDaemon;
- (void)launchiCloudFamilySettings;

@end

