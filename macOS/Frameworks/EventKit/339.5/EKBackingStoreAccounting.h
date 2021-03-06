//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalDisjointDateRange, EKCalendarStoreBackingStore, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

@interface EKBackingStoreAccounting : NSObject
{
    BOOL _allEventsReceipt;
    BOOL _allRemindersReceipt;
    BOOL _allRemindersWithDueDatesReceipt;
    BOOL _allCompletedRemindersReceipt;
    BOOL _allIncompletedRemindersReceipt;
    NSMutableSet *_itemIdentifiers;
    NSMutableSet *_calendarIdentifiersWithAllRemindersCached;
    unsigned long long _receiptGeneration;
    CalDisjointDateRange *_cachedEventsInRange;
    EKCalendarStoreBackingStore *_backingStore;
    NSObject<OS_dispatch_queue> *_fetchSerialQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *fetchSerialQueue; // @synthesize fetchSerialQueue=_fetchSerialQueue;
@property(nonatomic) __weak EKCalendarStoreBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(copy, nonatomic) CalDisjointDateRange *cachedEventsInRange; // @synthesize cachedEventsInRange=_cachedEventsInRange;
@property(readonly, nonatomic) NSSet *calendarIdentifiersWithAllRemindersCached; // @synthesize calendarIdentifiersWithAllRemindersCached=_calendarIdentifiersWithAllRemindersCached;
@property(readonly, nonatomic) NSSet *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(nonatomic) unsigned long long receiptGeneration; // @synthesize receiptGeneration=_receiptGeneration;
- (void).cxx_destruct;
- (void)addReceiptForRemindersInCalendars:(id)arg1;
- (BOOL)remindersInCalendarsAccountedFor:(id)arg1;
- (void)addReceiptForAllRemindersWithDueDates;
- (BOOL)allRemindersWithDueDatesAccountedFor;
- (void)addReceiptForAllIncompletedReminders;
- (void)addReceiptForAllCompletedReminders;
- (BOOL)allIncompletedRemindersAccountedFor;
- (BOOL)allCompletedRemindersAccountedFor;
- (void)addReceiptForAllReminders;
- (BOOL)allRemindersAccountedFor;
- (void)addReceiptForRange:(id)arg1;
- (unsigned long long)cachedPercentageForRange:(id)arg1;
- (id)uncachedRangeForRange:(id)arg1;
- (BOOL)eventDateRangeAccountedFor:(id)arg1;
- (void)addReceiptForAllEvents;
- (BOOL)allEventsAccountedFor;
- (void)updateIdentifierReceipts:(id)arg1;
- (void)updateCachedRange:(id)arg1;
- (void)addReceiptForOccurrence:(id)arg1;
- (void)addReceiptsForOccurrences:(id)arg1;
- (void)addReceiptsForOccurrenceIdentifiers:(id)arg1;
- (void)removeReceiptForOccurrenceIdentifier:(id)arg1;
- (void)addReceiptForOccurrenceIdentifier:(id)arg1;
- (id)unaccountedForIdentifiersIn:(id)arg1;
- (BOOL)occurrenceIdentifierAccountedFor:(id)arg1;
- (id)accountedForRemindersInCalendars:(id)arg1 queue:(id)arg2 lookupCachedBlock:(CDUnknownBlockType)arg3 fetchBlock:(CDUnknownBlockType)arg4 updateBlock:(CDUnknownBlockType)arg5;
- (id)accountedForRemindersWithDueDatesInQueue:(id)arg1 lookupCachedBlock:(CDUnknownBlockType)arg2 fetchBlock:(CDUnknownBlockType)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (id)accountedForIncompletedRemindersInQueue:(id)arg1 lookupCachedBlock:(CDUnknownBlockType)arg2 fetchBlock:(CDUnknownBlockType)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (id)accountedForCompletedRemindersInQueue:(id)arg1 lookupCachedBlock:(CDUnknownBlockType)arg2 fetchBlock:(CDUnknownBlockType)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (id)accountedForAllRemindersInQueue:(id)arg1 lookupCachedBlock:(CDUnknownBlockType)arg2 calendarsBlock:(CDUnknownBlockType)arg3 fetchBlock:(CDUnknownBlockType)arg4 updateBlock:(CDUnknownBlockType)arg5;
- (id)accountedForEventsInRange:(id)arg1 queue:(id)arg2 lookupCachedBlock:(CDUnknownBlockType)arg3 calendarsBlock:(CDUnknownBlockType)arg4 fetchBlock:(CDUnknownBlockType)arg5 updateBlock:(CDUnknownBlockType)arg6 fetchedMasters:(id *)arg7;
- (id)accountedForAllEventsInQueue:(id)arg1 lookupCachedBlock:(CDUnknownBlockType)arg2 calendarsBlock:(CDUnknownBlockType)arg3 fetchBlock:(CDUnknownBlockType)arg4 updateBlock:(CDUnknownBlockType)arg5;
- (id)accountedForOccurrencesWithIdentifiers:(id)arg1 queue:(id)arg2 lookupCachedBlock:(CDUnknownBlockType)arg3 fetchBlock:(CDUnknownBlockType)arg4 updateBlock:(CDUnknownBlockType)arg5;
- (id)accountedForOccurrenceWithIdentifier:(id)arg1 queue:(id)arg2 lookupCachedBlock:(CDUnknownBlockType)arg3 fetchBlock:(CDUnknownBlockType)arg4 updateBlock:(CDUnknownBlockType)arg5;
- (void)_accountForMultipleObjectsCheckBlock:(CDUnknownBlockType)arg1 lookupCachedBlock:(CDUnknownBlockType)arg2 fetchContainersBlock:(CDUnknownBlockType)arg3 fetchObjectsBlock:(CDUnknownBlockType)arg4 updateBlock:(CDUnknownBlockType)arg5 addReceiptBlock:(CDUnknownBlockType)arg6 queue:(id)arg7;
- (void)_accountForObjectCheckBlock:(CDUnknownBlockType)arg1 lookupCachedBlock:(CDUnknownBlockType)arg2 fetchContainersBlock:(CDUnknownBlockType)arg3 fetchObjectsBlock:(CDUnknownBlockType)arg4 updateBlock:(CDUnknownBlockType)arg5 addReceiptBlock:(CDUnknownBlockType)arg6 queue:(id)arg7;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyForBackingStore:(id)arg1;
- (id)initWithBackingStore:(id)arg1;

@end

