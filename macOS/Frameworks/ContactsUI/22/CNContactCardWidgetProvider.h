//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNCache, CNContactCardWidgetProviderDelegateWrapper;

@interface CNContactCardWidgetProvider : NSObject
{
    CNContactCardWidgetProviderDelegateWrapper *_safeDelegate;
    CNCache *_viewControllerCache;
}

+ (id)listOfWidgetClassesFromModeIdentifier;
+ (id)modeIdentifierForMode:(unsigned long long)arg1 tabState:(unsigned long long)arg2 allowsLikenessEditing:(BOOL)arg3 isMe:(BOOL)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) CNCache *viewControllerCache; // @synthesize viewControllerCache=_viewControllerCache;
@property(retain, nonatomic) CNContactCardWidgetProviderDelegateWrapper *safeDelegate; // @synthesize safeDelegate=_safeDelegate;
- (void)prepareTabControllerWithCardMode:(unsigned long long)arg1 isMe:(BOOL)arg2;
- (id)widgetsForContactCardViewMode:(unsigned long long)arg1 isMe:(BOOL)arg2;
- (id)cardWidgetsFromWidgetClasses:(id)arg1;
- (BOOL)shouldIncludeViewController:(id)arg1;
- (void)tellDelegateWillCreateViewController:(id)arg1;
- (id)controllerOfClass:(Class)arg1;
- (id)avatarViewController;
- (id)editAuthorizationViewController;
- (id)sharingEnabledWarningViewController;
- (id)detailsViewController;
- (id)nameViewController;
- (id)tabSwitcherViewController;
- (id)likenessPickerViewController;
- (id)avatarNameCompositeController;
- (void)setDelegate:(id)arg1;

@end

