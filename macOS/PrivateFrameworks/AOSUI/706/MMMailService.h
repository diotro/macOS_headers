//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AOSUI/MMService.h>

#import <AOSUI/MMWebKitViewControllerDelegate-Protocol.h>

@class MMWebKitViewController, NSString;

@interface MMMailService : MMService <MMWebKitViewControllerDelegate>
{
    MMWebKitViewController *_webKitViewController;
    BOOL _shouldEnable;
}

@property(nonatomic) BOOL shouldEnable; // @synthesize shouldEnable=_shouldEnable;
@property(retain, nonatomic) MMWebKitViewController *webKitViewController; // @synthesize webKitViewController=_webKitViewController;
- (void).cxx_destruct;
- (void)_closeModalWindow;
- (void)mmWebKitViewControllerDidDismiss:(id)arg1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)arg1;
- (void)mmWebKitViewControllerDidFailLoading:(id)arg1 error:(id)arg2;
- (void)mmWebKitViewControllerDidSucceed:(id)arg1;
- (void)mmWebKitViewControllerDidCancel:(id)arg1;
- (void)_serviceFailed:(id)arg1;
- (void)_propertiesChanged:(id)arg1;
- (void)disableMailAddressListeners;
- (void)enableMailAddressListeners;
- (void)_showClientFailureSheet:(id)arg1 enabling:(BOOL)arg2;
- (BOOL)hasDataToMerge;
- (BOOL)shouldEnableOnLogin;
- (void)setEnabled:(BOOL)arg1 creating:(BOOL)arg2 withWindow:(id)arg3;
- (id)icon;
- (id)initWithServiceID:(id)arg1 forAccount:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

