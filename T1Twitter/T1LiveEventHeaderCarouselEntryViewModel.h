//
#ifndef T1LiveEventHeaderCarouselEntryViewModel_h
#define T1LiveEventHeaderCarouselEntryViewModel_h
@import Foundation;

#include "T1LiveEvent.h"
#include "T1LiveEventCarouselEntry.h"
#include "T1LiveEventSlate.h"

@class NSObject, TFNTwitterAccount, TFNTwitterStatus;

@interface T1LiveEventHeaderCarouselEntryViewModel : NSObject

@property (retain, nonatomic) T1LiveEvent *liveEvent;
@property (retain, nonatomic) T1LiveEventCarouselEntry *carouselEntry;
@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TFNTwitterStatus *status;
@property (readonly, nonatomic) T1LiveEventSlate *slate;

/* instance methods */
- (id)mediaViewModel;
- (id)init;
- (id)initWithLiveEvent:(id)event carouselEntry:(id)entry status:(id)status account:(id)account;
- (_Bool)isEqual:(id)equal;
- (id)description;
- (_Bool)isEqualToCarouselEntryViewModel:(id)model;
- (id)_t1_slateFromCarouselEntry:(id)entry;

@end

#endif /* T1LiveEventHeaderCarouselEntryViewModel_h */
