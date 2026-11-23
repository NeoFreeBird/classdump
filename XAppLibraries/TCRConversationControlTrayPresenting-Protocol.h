//
#ifndef TCRConversationControlTrayPresenting_Protocol_h
#define TCRConversationControlTrayPresenting_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRConversationControlTrayPresenting <NSObject>

@required

@property (nonatomic, copy) id /* block */ onDidLeaveTray;

/* required instance methods */
- (void)updateWithTypes:(id)types geoOptions:(id)options;
- (void)updateWithTypes:(id)types geoOptions:(id)options;
- (void)presentFrom:(id)from completion:(id /* block */)completion;
- (void)presentFrom:(id)from completion:(id /* block */)completion;
- (id)makePushableTrayScreen;

@optional

@end

#endif /* TCRConversationControlTrayPresenting_Protocol_h */
