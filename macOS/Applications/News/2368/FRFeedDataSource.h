//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCNewsAppConfigurationObserving-Protocol.h"
#import "FRCollectionFooterDelegate-Protocol.h"
#import "FRCollectionHeaderDelegate-Protocol.h"
#import "FRDragControllerDataSource-Protocol.h"
#import "FRFeedAdInventoryDelegate-Protocol.h"
#import "FRFeedBasedDataSourceDelegate-Protocol.h"
#import "FRFeedCollectionViewCellDelegate-Protocol.h"
#import "FRFeedCollectionViewLayoutBlueprintIntegratorType-Protocol.h"
#import "FRFeedCollectionViewUpdateManagerDelegate-Protocol.h"
#import "FRFeedHeadlineViewRendererDataSource-Protocol.h"
#import "FRFeedObscuredHeadlineCollectionViewCellDelegate-Protocol.h"
#import "FRSubscriptionMonitorDelegate-Protocol.h"
#import "NPPaywallDelegate-Protocol.h"
#import "TSGroupRankProvider-Protocol.h"
#import "TSVideoGroupViewControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class FCFeedDescriptor, FCObservable, FRDragController, FRFeedAdInventory, FRFeedBackgroundDebouncer, FRFeedCollectionView, FRFeedCollectionViewBookmarkManager, FRFeedCollectionViewLayoutBlueprint, FRFeedCollectionViewLayoutBlueprintManager, FRFeedCollectionViewUpdateManager, FRFeedDataStorage, FRFeedHeadlineViewRendererProvider, FRFeedPrewarmer, FRFeedScrollLock, FROnScreenAdManager, FRRestoredBlueprintContent, FRScrollQueueManager, FRSectionHeaderButtonController, FRSubscriptionPlacardCreator, FRValidationQueue, FRViewControllerCollectionViewCellLifecycleManager, NFEventManager, NPPaywall, NSMutableArray, NSMutableDictionary, NSString, NSTimer, TSBlockingPluginManager, TSImageCache;
@protocol FCFeedTheming, FRFeedCollectionViewBookmarkManagerDelegate, FRFeedDataSourceDelegate, FRFeldsparContext, FRSubscriptionMonitorDelegate, NPPaywallDelegate, OS_dispatch_group, TSChannelIssuesModuleType, TSChannelIssuesPluginFactoryType, TSForYouMagazinesModuleType, TSForYouMagazinesPluginFactoryType, TSForYouTodayModuleType, TSForYouTodayPluginFactoryType, TSMoreVideosModuleType, TSMoreVideosPluginFactoryType, TSTodayBridgedBlueprintManagerType, TSTopVideosModuleType, TSTopVideosPluginFactoryType;

@interface FRFeedDataSource : NSObject <FRFeedCollectionViewCellDelegate, FRFeedObscuredHeadlineCollectionViewCellDelegate, FRFeedBasedDataSourceDelegate, FCNewsAppConfigurationObserving, UIGestureRecognizerDelegate, UIViewControllerPreviewingDelegate, FRCollectionHeaderDelegate, FRCollectionFooterDelegate, FRSubscriptionMonitorDelegate, FRFeedCollectionViewLayoutBlueprintIntegratorType, FRFeedCollectionViewUpdateManagerDelegate, FRFeedHeadlineViewRendererDataSource, TSVideoGroupViewControllerDelegate, TSGroupRankProvider, NPPaywallDelegate, UICollectionViewDataSource, FRDragControllerDataSource, FRFeedAdInventoryDelegate>
{
    BOOL _isForYouFeed;
    BOOL _trackingScrolling;
    BOOL _isRubberBanding;
    BOOL _isOfflineMode;
    BOOL _finishedPresentingFirstBlueprint;
    BOOL _hasBecomeVisibleAtleastOnce;
    id <FRFeedDataSourceDelegate> _delegate;
    id <FRSubscriptionMonitorDelegate> _subscriptionMonitorDelegate;
    FRFeedDataStorage *_feedDataStorage;
    FRFeedCollectionView *_collectionView;
    FRFeedCollectionViewLayoutBlueprintManager *_layoutBlueprintManager;
    FRFeedCollectionViewBookmarkManager *_bookmarkManager;
    FROnScreenAdManager *_onScreenAdManager;
    FRFeedCollectionViewUpdateManager *_collectionViewUpdateManager;
    FRDragController *_dragController;
    FRFeedScrollLock *_scrollLock;
    FRFeedAdInventory *_nativeAdInventory;
    TSBlockingPluginManager *_pluginManager;
    FRViewControllerCollectionViewCellLifecycleManager *_lifecycleManager;
    FCFeedDescriptor *_feed;
    id <FRFeldsparContext> _feldsparContext;
    id <FRFeedCollectionViewBookmarkManagerDelegate> _bookmarkManagerDelegate;
    id <NPPaywallDelegate> _bundleSubscriptionPaywallDelegate;
    id <FCFeedTheming> _feedTheme;
    FCObservable *_feedSettings;
    FRSectionHeaderButtonController *_buttonController;
    long long _countOfArticlesPulledDownAtTheTopOfLastRefresh;
    NSTimer *_relativeDateUpdateTimer;
    NSObject<OS_dispatch_group> *_deferredWhileScrollingGroup;
    NSObject<OS_dispatch_group> *_refreshViewAnimationsGroup;
    TSImageCache *_thumbnailImageCache;
    TSImageCache *_publisherLogoImageCache;
    id <TSTopVideosModuleType> _topVideosModule;
    id <TSMoreVideosModuleType> _moreVideosModule;
    id <TSChannelIssuesModuleType> _channelIssuesModule;
    id <TSForYouMagazinesModuleType> _magazinesModule;
    id <TSForYouTodayModuleType> _todayModule;
    id <TSTopVideosPluginFactoryType> _topVideosPluginFactory;
    id <TSMoreVideosPluginFactoryType> _moreVideosPluginFactory;
    id <TSChannelIssuesPluginFactoryType> _channelIssuesPluginFactory;
    id <TSForYouMagazinesPluginFactoryType> _magazinesPluginFactory;
    id <TSForYouTodayPluginFactoryType> _todayPluginFactory;
    id <TSTodayBridgedBlueprintManagerType> _bridgedBlueprintManager;
    NSMutableDictionary *_videoGroupMetaData;
    NSMutableDictionary *_videoGroupReuseIdentifiers;
    NSMutableArray *_blocksWaitingForFirstBlueprint;
    FRRestoredBlueprintContent *_contentToRestore;
    NPPaywall *_paywall;
    FRSubscriptionPlacardCreator *_subscriptionPlacardCreator;
    FRScrollQueueManager *_scrollQueueManager;
    FRFeedPrewarmer *_prewarmer;
    FRFeedBackgroundDebouncer *_backgroundDebouncer;
    NFEventManager *_eventManager;
    FRValidationQueue *_adValidationQueue;
    FRFeedHeadlineViewRendererProvider *_rendererProvider;
    struct CGPoint _lastContentOffset;
}

@property(retain, nonatomic) FRFeedHeadlineViewRendererProvider *rendererProvider; // @synthesize rendererProvider=_rendererProvider;
@property(retain, nonatomic) FRValidationQueue *adValidationQueue; // @synthesize adValidationQueue=_adValidationQueue;
@property(retain, nonatomic) NFEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(retain, nonatomic) FRFeedBackgroundDebouncer *backgroundDebouncer; // @synthesize backgroundDebouncer=_backgroundDebouncer;
@property(retain, nonatomic) FRFeedPrewarmer *prewarmer; // @synthesize prewarmer=_prewarmer;
@property(nonatomic) __weak FRScrollQueueManager *scrollQueueManager; // @synthesize scrollQueueManager=_scrollQueueManager;
@property(retain, nonatomic) FRSubscriptionPlacardCreator *subscriptionPlacardCreator; // @synthesize subscriptionPlacardCreator=_subscriptionPlacardCreator;
@property(retain, nonatomic) NPPaywall *paywall; // @synthesize paywall=_paywall;
@property(retain, nonatomic) FRRestoredBlueprintContent *contentToRestore; // @synthesize contentToRestore=_contentToRestore;
@property(nonatomic) BOOL hasBecomeVisibleAtleastOnce; // @synthesize hasBecomeVisibleAtleastOnce=_hasBecomeVisibleAtleastOnce;
@property(retain, nonatomic) NSMutableArray *blocksWaitingForFirstBlueprint; // @synthesize blocksWaitingForFirstBlueprint=_blocksWaitingForFirstBlueprint;
@property(nonatomic) BOOL finishedPresentingFirstBlueprint; // @synthesize finishedPresentingFirstBlueprint=_finishedPresentingFirstBlueprint;
@property(nonatomic) BOOL isOfflineMode; // @synthesize isOfflineMode=_isOfflineMode;
@property(retain, nonatomic) NSMutableDictionary *videoGroupReuseIdentifiers; // @synthesize videoGroupReuseIdentifiers=_videoGroupReuseIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *videoGroupMetaData; // @synthesize videoGroupMetaData=_videoGroupMetaData;
@property(retain, nonatomic) id <TSTodayBridgedBlueprintManagerType> bridgedBlueprintManager; // @synthesize bridgedBlueprintManager=_bridgedBlueprintManager;
@property(retain, nonatomic) id <TSForYouTodayPluginFactoryType> todayPluginFactory; // @synthesize todayPluginFactory=_todayPluginFactory;
@property(retain, nonatomic) id <TSForYouMagazinesPluginFactoryType> magazinesPluginFactory; // @synthesize magazinesPluginFactory=_magazinesPluginFactory;
@property(retain, nonatomic) id <TSChannelIssuesPluginFactoryType> channelIssuesPluginFactory; // @synthesize channelIssuesPluginFactory=_channelIssuesPluginFactory;
@property(retain, nonatomic) id <TSMoreVideosPluginFactoryType> moreVideosPluginFactory; // @synthesize moreVideosPluginFactory=_moreVideosPluginFactory;
@property(retain, nonatomic) id <TSTopVideosPluginFactoryType> topVideosPluginFactory; // @synthesize topVideosPluginFactory=_topVideosPluginFactory;
@property(retain, nonatomic) id <TSForYouTodayModuleType> todayModule; // @synthesize todayModule=_todayModule;
@property(retain, nonatomic) id <TSForYouMagazinesModuleType> magazinesModule; // @synthesize magazinesModule=_magazinesModule;
@property(retain, nonatomic) id <TSChannelIssuesModuleType> channelIssuesModule; // @synthesize channelIssuesModule=_channelIssuesModule;
@property(retain, nonatomic) id <TSMoreVideosModuleType> moreVideosModule; // @synthesize moreVideosModule=_moreVideosModule;
@property(retain, nonatomic) id <TSTopVideosModuleType> topVideosModule; // @synthesize topVideosModule=_topVideosModule;
@property(retain, nonatomic) TSImageCache *publisherLogoImageCache; // @synthesize publisherLogoImageCache=_publisherLogoImageCache;
@property(retain, nonatomic) TSImageCache *thumbnailImageCache; // @synthesize thumbnailImageCache=_thumbnailImageCache;
@property(nonatomic) BOOL isRubberBanding; // @synthesize isRubberBanding=_isRubberBanding;
@property(nonatomic) BOOL trackingScrolling; // @synthesize trackingScrolling=_trackingScrolling;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *refreshViewAnimationsGroup; // @synthesize refreshViewAnimationsGroup=_refreshViewAnimationsGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *deferredWhileScrollingGroup; // @synthesize deferredWhileScrollingGroup=_deferredWhileScrollingGroup;
@property(retain, nonatomic) NSTimer *relativeDateUpdateTimer; // @synthesize relativeDateUpdateTimer=_relativeDateUpdateTimer;
@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) long long countOfArticlesPulledDownAtTheTopOfLastRefresh; // @synthesize countOfArticlesPulledDownAtTheTopOfLastRefresh=_countOfArticlesPulledDownAtTheTopOfLastRefresh;
@property(retain, nonatomic) FRSectionHeaderButtonController *buttonController; // @synthesize buttonController=_buttonController;
@property(retain, nonatomic) FCObservable *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(readonly, nonatomic) id <FCFeedTheming> feedTheme; // @synthesize feedTheme=_feedTheme;
@property(readonly, nonatomic) __weak id <NPPaywallDelegate> bundleSubscriptionPaywallDelegate; // @synthesize bundleSubscriptionPaywallDelegate=_bundleSubscriptionPaywallDelegate;
@property(readonly, nonatomic) __weak id <FRFeedCollectionViewBookmarkManagerDelegate> bookmarkManagerDelegate; // @synthesize bookmarkManagerDelegate=_bookmarkManagerDelegate;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(readonly, copy, nonatomic) FCFeedDescriptor *feed; // @synthesize feed=_feed;
@property(retain, nonatomic) FRViewControllerCollectionViewCellLifecycleManager *lifecycleManager; // @synthesize lifecycleManager=_lifecycleManager;
@property(readonly, nonatomic) TSBlockingPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
@property(readonly, nonatomic) FRFeedAdInventory *nativeAdInventory; // @synthesize nativeAdInventory=_nativeAdInventory;
@property(readonly, nonatomic) FRFeedScrollLock *scrollLock; // @synthesize scrollLock=_scrollLock;
@property(readonly, nonatomic) BOOL isForYouFeed; // @synthesize isForYouFeed=_isForYouFeed;
@property(retain, nonatomic) FRDragController *dragController; // @synthesize dragController=_dragController;
@property(retain, nonatomic) FRFeedCollectionViewUpdateManager *collectionViewUpdateManager; // @synthesize collectionViewUpdateManager=_collectionViewUpdateManager;
@property(retain, nonatomic) FROnScreenAdManager *onScreenAdManager; // @synthesize onScreenAdManager=_onScreenAdManager;
@property(retain, nonatomic) FRFeedCollectionViewBookmarkManager *bookmarkManager; // @synthesize bookmarkManager=_bookmarkManager;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprintManager *layoutBlueprintManager; // @synthesize layoutBlueprintManager=_layoutBlueprintManager;
@property(nonatomic) __weak FRFeedCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) FRFeedDataStorage *feedDataStorage; // @synthesize feedDataStorage=_feedDataStorage;
@property(nonatomic) __weak id <FRSubscriptionMonitorDelegate> subscriptionMonitorDelegate; // @synthesize subscriptionMonitorDelegate=_subscriptionMonitorDelegate;
@property(nonatomic) __weak id <FRFeedDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removePaywallFor:(long long)arg1;
- (long long)groupRankFor:(id)arg1;
- (void)videoGroupViewController:(id)arg1 didSelectShareActivityForHeadline:(id)arg2 activityType:(id)arg3 completed:(BOOL)arg4 returnedItems:(id)arg5 activityError:(id)arg6 withGroupID:(id)arg7;
- (void)videoGroupViewController:(id)arg1 didSelectDislikeButtonWithGroupID:(id)arg2 dislikeButton:(id)arg3;
- (id)videoGroupViewController:(id)arg1 previewingViewControllerForHeadline:(id)arg2 with:(id)arg3;
- (void)videoGroupViewController:(id)arg1 didSelectReportConcernActivityForVideoHeadline:(id)arg2;
- (void)videoGroupViewController:(id)arg1 didPressPlayButtonForMoreVideoHeadline:(id)arg2 withGroupID:(id)arg3;
- (void)videoGroupViewController:(id)arg1 didSelectMoreVideoHeadline:(id)arg2 withGroupID:(id)arg3;
- (void)videoGroupViewController:(id)arg1 didSelectTopVideoHeadline:(id)arg2 withGroupID:(id)arg3;
- (BOOL)feedHeadlineViewRenderer:(id)arg1 shouldAnimateImageForTileInfo:(id)arg2;
- (BOOL)willShowPaywall;
- (void)updateViewFromBlueprintGrowthWithReason:(id)arg1;
- (void)queueGapExpandModifierIfHasWindow:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runSubscriptionBlueprintModifier;
- (void)runReloadBlueprintModifierForUpdatedHeadlineIDs:(id)arg1;
- (void)runUpdateBlueprintModifierFromHeadlineTileInfoID:(id)arg1 toHeadlineTileInfoID:(id)arg2;
- (void)runAdBlueprintModifier;
- (void)runAdBlueprintModifierIfIdleAndPending;
- (void)runResetBlueprintModifierForSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runDebouncedResetBlueprintModifierForSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runOnlineBlueprintModifier;
- (void)runOfflineBlueprintModifier;
- (void)runGapExpandBlueprintModifierForScrollPosition:(struct CGPoint)arg1 shouldCheckForWindow:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)runSectionDislikeModifierWithGroupRemovalTest:(CDUnknownBlockType)arg1;
- (id)refreshAllowsAnimationPromiseWithRefreshKind:(unsigned long long)arg1;
- (id)refreshBlueprintPromiseWithContext:(id)arg1;
- (id)runPrefetchWithAppConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_enumerateBlueprintModifiersForAction:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)allowAction:(long long)arg1;
- (void)preventAction:(long long)arg1;
- (void)runUpdateModifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)runExpansionModifierWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL hasRunPrewarm;
- (void)runPrewarmForFirstBlueprintAllowingSyncAttempt:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_generateReadingListStatusForLayoutInfoIDs:(id)arg1;
- (id)_generateReadStatusForLayoutInfoIDs:(id)arg1;
- (void)_prewarmAdsForVisibleRect:(struct CGRect)arg1 withSortedLayoutInfos:(id)arg2 withResult:(id)arg3;
- (void)_prewarmModifierResultForReload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prewarmModifierResultForChanges:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutBlueprintManager:(id)arg1 willIntegrateModifierResult:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)layoutBlueprintManager:(id)arg1 integrateModifierResult:(id)arg2 applyBlueprint:(CDUnknownBlockType)arg3;
- (void)layoutBlueprintManager:(id)arg1 integrateModifierResult:(id)arg2 applyBlueprint:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)collectionViewUpdateManager:(id)arg1 didUpdateViewWithResult:(id)arg2 success:(BOOL)arg3;
- (void)collectionViewUpdateManager:(id)arg1 willUpdateViewWithResult:(id)arg2;
- (void)showNotificationsEnabledAlertForTag:(id)arg1;
- (void)exceededMaximumAllowedSubscription;
- (BOOL)canPerformAnimationsInCollectionView;
- (void)cancelAnyPendingLayouts;
- (void)_prewarmCellsForLayoutInfos:(id)arg1 callbackQueue:(id)arg2 userInterfaceStyle:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)requestContentToRestore;
- (void)prepareRestorableBlueprintContent;
- (BOOL)_canceled;
- (void)updateCollectionViewCellsWithHeadlineIDs:(id)arg1;
@property(readonly, nonatomic) FRFeedCollectionViewLayoutBlueprint *layoutBlueprint;
- (void)setCollectionViewIsScrolling:(BOOL)arg1;
- (void)setCollectionViewIsRubberBanding:(BOOL)arg1;
- (BOOL)_isUserInRubberBandRange;
- (void)_checkForInRubberBandRange;
- (void)collectionViewDidScrollIfHasWindow:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dragController:(id)arg1 headlineForCellAtIndexPath:(id)arg2;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (BOOL)hasContent;
- (void)notifyWhenPresenceOfContentHasBeenDeterminedUsingBlock:(CDUnknownBlockType)arg1;
- (void)playButtonPressedForFeedCollectionViewVideoCell:(id)arg1;
- (BOOL)shouldAttemptToRenderImageSynchronouslyForCell:(id)arg1;
- (void)showHeadlineForCell:(id)arg1;
- (BOOL)shouldAnimateImageLoadForCell:(id)arg1;
- (id)accessibilityCustomActionsForFeedCollectionViewCell:(id)arg1;
- (void)feedCollectionViewCell:(id)arg1 shouldDisplayShareSheet:(BOOL)arg2;
- (void)feedCollectionViewCell:(id)arg1 movedToWindow:(id)arg2;
- (void)obscuringHeadlineCellWantsToUnhide:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)checkForUpdatesForTileInfoID:(id)arg1;
- (void)_checkForHeadlineUpdatesIfNecessary;
- (id)_feedCollectionView:(id)arg1 cellForHeadline:(id)arg2 atIndexPath:(id)arg3;
- (id)_feedCollectionView:(id)arg1 adForTileInfo:(id)arg2 atIndexPath:(id)arg3;
- (id)_feedCollectionView:(id)arg1 gapForTileInfo:(id)arg2 atIndexPath:(id)arg3;
- (id)_offlineModeCellForCollectionView:(id)arg1 atIndexPath:(id)arg2 offlineReason:(long long)arg3;
- (BOOL)feedDataSourceShouldAnimateLoadOfCellImages:(id)arg1;
- (void)feedDataSourceDidReloadData:(id)arg1;
- (void)feedDataSource:(id)arg1 wantsToPerformUpdate:(CDUnknownBlockType)arg2;
- (id)previewViewControllerForFooter:(id)arg1;
- (void)footerTapped:(id)arg1;
- (void)header:(id)arg1 favoriteButtonTapped:(id)arg2;
- (void)header:(id)arg1 likeDislikeButtonTapped:(id)arg2;
- (void)header:(id)arg1 sectionLongPressed:(id)arg2;
- (void)headerTapped:(id)arg1;
- (id)_collectionView:(id)arg1 reusableViewWithSectionDescriptor:(id)arg2 atIndexPath:(id)arg3 sectionID:(id)arg4 feedSettings:(id)arg5;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_notifyUpdateOfRelativeTimes;
- (void)setUpdateTimerActive:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hasReachedEndOfContent;
@property(readonly, nonatomic) BOOL isFinishedLoading;
- (BOOL)canBeRefreshed;
- (BOOL)hasFinishedLoadingAndHasNoContent;
- (void)prepareForAdsAfterHeadline:(id)arg1 forBlueprint:(id)arg2 feedColumnCount:(long long)arg3;
- (void)prepareAdForUpcomingTileInfo:(id)arg1 forBlueprint:(id)arg2;
- (void)_enumerateHeadlinesInTileInfo:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_insertBannerAdForTileInfo:(id)arg1 forBlueprint:(id)arg2;
- (void)_insertNonForYouNativeAdForTileInfo:(id)arg1 forBlueprint:(id)arg2;
- (BOOL)_canInsertNativeAdFreelyInFeed;
- (id)viewControllerForFeedAdInventory:(id)arg1;
- (void)feedInventoryRequestCollapsingOfAd:(id)arg1 withIdentifier:(id)arg2 collapseCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_fireNativeAdAppearanceEventsIfNeeded;
- (void)feedInventoryRequestExpansionOfAd:(id)arg1 withIdentifier:(id)arg2 expansionCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_didPrewarmFirstBlueprint:(id)arg1;
- (void)initializeDataSourceManagers;
- (id)buildNewBlueprintBasedOnCurrentViewport;
- (void)configureSubscriptionPlacardData;
- (void)setInOfflineMode:(BOOL)arg1;
- (void)registerNecessaryCellTypesWithCollectionView:(id)arg1;
- (void)configureCollectionView:(id)arg1 scrollQueueManager:(id)arg2;
@property(readonly, nonatomic) BOOL layoutBlueprintRepresentsTopOfFeed;
- (id)_feedDescriptorForSectionID:(id)arg1;
@property(readonly, nonatomic) BOOL hasVisibleContent;
- (BOOL)feedSettingsRespectTraitCollection:(id)arg1;
- (void)_startLoadingThemeFonts;
- (void)setFeed:(id)arg1 theme:(id)arg2 dataStorage:(id)arg3;
- (void)dealloc;
- (id)initWithContext:(id)arg1 bookmarkManagerDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

