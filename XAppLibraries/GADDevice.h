//
#ifndef GADDevice_h
#define GADDevice_h
@import Foundation;

#include "GADSignal-Protocol.h"
#include "GADSignalSource-Protocol.h"

@class NSArray, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GADDevice : NSObject <GADSignalSource, GADSignal> {
    /* instance variables */
    NSDictionary *_infoPlist;
    NSDictionary *_localizedPlist;
    NSArray *_languagesArray;
    NSObject<OS_dispatch_queue> *_signalsLockQueue;
    NSDictionary *_iTunesMetadata;
    NSString *_deviceModel;
    NSString *_systemName;
    NSString *_appDistributor;
    _Bool _isIOSOnMac;
    _Bool _isJailbroken;
    struct atomic_flag { _Atomic _Bool _Value; } _backgroundSignalsCached;
}

@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *deviceSubmodel;
@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (readonly, nonatomic) double mainScreenDensity;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } standardizedMainScreenPortraitBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)cacheMainThreadParameters;
- (void)cacheBackgroundParametersOnce;
- (id)canOpenURLStrings:(id)urlstrings;
- (void)getSignalUpdateQueue:(id *)queue signalCreationBlock:(id /* block */ *)block;
- (void)addSignalEntriesToMutableDictionary:(id)dictionary;

@end

#endif /* GADDevice_h */
