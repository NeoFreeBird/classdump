//
#ifndef T1LiveEventShareViaActionItemDetailsProvider_h
#define T1LiveEventShareViaActionItemDetailsProvider_h
@import Foundation;

#include "T1LiveEvent.h"
#include "T1ShareViaActionItemDetailsProvider-Protocol.h"

@class NSObject, NSString;

@interface T1LiveEventShareViaActionItemDetailsProvider : NSObject <T1ShareViaActionItemDetailsProvider>

@property (readonly, nonatomic) T1LiveEvent *liveEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLiveEvent:(id)event;
- (id)activityViewControllerForViewController:(id)controller account:(id)account source:(id)source scribeContext:(id)context doneBlock:(id /* block */)block;

@end

#endif /* T1LiveEventShareViaActionItemDetailsProvider_h */
