//
#ifndef TFSScribeDataDeletionDelegate_Protocol_h
#define TFSScribeDataDeletionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSScribeDataDeletionDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)shouldReportDataDeletion;
- (void)shelfLifeExpiredForRanges:(id)ranges;
- (void)shelfLifeExpiredForRanges:(id)ranges;
- (void)maxRetryReachedForRanges:(id)ranges;
- (void)maxRetryReachedForRanges:(id)ranges;
- (void)reportRetryForError:(id)error;
- (void)reportRetryForError:(id)error;

@optional

@end

#endif /* TFSScribeDataDeletionDelegate_Protocol_h */
