//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRSearchResultsTableViewControllerPresentationDelegate-Protocol.h"
#import "TSTableOfContentsSearchProviderType-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"

@class FRSearchViewController, NSString, UISearchController, UIViewController;
@protocol FRFeldsparContext;

@interface FRTableOfContentsSearchProvider : NSObject <UISearchControllerDelegate, FRSearchResultsTableViewControllerPresentationDelegate, TSTableOfContentsSearchProviderType>
{
    BOOL _isEnabled;
    UISearchController *_searchController;
    UIViewController *_presentingViewController;
    id <FRFeldsparContext> _feldsparContext;
    FRSearchViewController *_searchViewController;
}

@property(readonly, nonatomic) FRSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
- (void).cxx_destruct;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)searchResultsTableViewController:(id)arg1 wantsToPushViewController:(id)arg2 inDetail:(BOOL)arg3;
- (void)performSearchForText:(id)arg1;
@property(readonly, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
- (id)initWithPresentingViewController:(id)arg1 feldsparContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

