//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionOutboxProgressing_h
#define TFNTwitterCompositionOutboxProgressing_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSProgressing-Protocol.h"

@class NSHashTable, NSObject, NSString;

@interface TFNTwitterCompositionOutboxProgressing : NSObject <TFSProgressing>

@property (nonatomic) _Bool didStartProgress;
@property (nonatomic) long long phase;
@property (nonatomic) unsigned long long preparingVideoCount;
@property (nonatomic) unsigned long long sentCompositionCount;
@property (retain, nonatomic) NSHashTable *batchCompositions;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long numberOfObjects;
@property (readonly, copy, nonatomic) id <NSCopying> uniqueID;
@property (readonly, copy, nonatomic) NSString *progressDisplayTitle;
@property (readonly, nonatomic) unsigned long long progressWeight;
@property (readonly, nonatomic) _Bool excludeFromProgressCenter;
@property (readonly, nonatomic) _Bool excludeFromActivityProgress;
@property (readonly, copy, nonatomic) NSString *progressSuccessDisplayTitle;
@property (readonly, copy, nonatomic) NSString *progressCanceledDisplayTitle;
@property (readonly, copy, nonatomic) NSString *progressFailureDisplayTitle;
@property (readonly, nonatomic) _Bool activityProgressIsDeterminate;
@property (readonly, copy, nonatomic) id /* block */ activityProgressCancelAction;
@property (readonly, copy, nonatomic) id /* block */ activityProgressTapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCompositions:(id)compositions;
- (id)_tfn_processingTitle;
- (void)updateRemainingFromOutboxCompositions:(id)compositions;
- (_Bool)coversComposition:(id)composition;
- (id)compositionsInOutbox:(id)outbox;
- (void)endProgressing;
- (void)updateProgress:(double)progress phase:(long long)phase preparingVideoCount:(unsigned long long)count;
- (void)_tfn_main_startProgress;
- (void)_tfn_main_updateProgress;

@end

#endif /* TFNTwitterCompositionOutboxProgressing_h */
