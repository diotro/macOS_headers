//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CodaPlugInsController, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CodaScriptPlugInDelegate : NSObject
{
    NSString *name;
    NSArray *commands;
    CodaPlugInsController *controller;
    id <CodaPlugInBundle> bundle;
}

+ (id)plugInDelegateWithController:(id)arg1 bundle:(id)arg2;
- (void)writeDataToPipe:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)runScript:(id)arg1;
- (void)resetPlugInInfo;
- (void)registerCommands:(id)arg1 submenuTitle:(id)arg2;
- (id)name;
- (void)dealloc;
- (id)initWithPlugInController:(id)arg1 bundle:(id)arg2;

@end

