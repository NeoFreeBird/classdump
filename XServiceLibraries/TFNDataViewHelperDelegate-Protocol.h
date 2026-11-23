//
#ifndef TFNDataViewHelperDelegate_Protocol_h
#define TFNDataViewHelperDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNDataViewHelperDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)dataViewWillUpdateForHelper:(id)helper type:(long long)type;
- (void)dataViewDidUpdateForHelper:(id)helper type:(long long)type animated:(_Bool)animated;
- (unsigned long long)dataViewHelper:(id)helper sectionBreaksForIndexPath:(id)path;

@optional

/* optional instance methods */
- (void)beginDataViewUpdatesForHelper:(id)helper;
- (void)endDataViewUpdatesForHelper:(id)helper;
- (void)dataViewHelper:(id)helper performBatchUpdates:(id /* block */)updates completion:(id /* block */)completion;

@end

#endif /* TFNDataViewHelperDelegate_Protocol_h */
