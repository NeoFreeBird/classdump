//
#ifndef TFSTwitterScribeLossHandler_h
#define TFSTwitterScribeLossHandler_h
@import Foundation;

#include "TFSScribeDataDeletionDelegate-Protocol.h"

@class NSObject;

@interface TFSTwitterScribeLossHandler : NSObject <TFSScribeDataDeletionDelegate> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 kDefaultRate;
    B24@0:8@"NSString"16 serialQueue;
    B24@0:8@"NSString"16 isReportingEnabled;
    B24@0:8@"NSString"16 samplers;
    B24@0:8@"NSString"16 deferredShelfLifeRanges;
    B24@0:8@"NSString"16 hasSentOutOfSpaceReport;
}

@property (nonatomic) _Bool isReportingEnabledObjC;
@property (nonatomic, copy) id /* block */ isNetworkReachable;
@property (nonatomic, copy) id /* block */ reportNonFatal;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)setSampleRate:(id)rate forDeletionType:(long long)type;
- (void)reportDeletedOnLogoutWithRanges:(id)ranges username:(id)username userId:(id)id accountUserId:(id)id;
- (_Bool)shouldReportDataDeletion;
- (void)shelfLifeExpiredForRanges:(id)ranges;
- (void)maxRetryReachedForRanges:(id)ranges;
- (void)reportRetryForError:(id)error;

@end

#endif /* TFSTwitterScribeLossHandler_h */
