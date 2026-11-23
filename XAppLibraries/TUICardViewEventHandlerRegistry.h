//
#ifndef TUICardViewEventHandlerRegistry_h
#define TUICardViewEventHandlerRegistry_h
@import Foundation;

#include "TUICardViewEventHandler-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSObject, NSString;

@interface TUICardViewEventHandlerRegistry : NSObject <TUICardViewEventHandler>

@property (retain, nonatomic) NSMutableDictionary *perCardTypeHandlerMap;
@property (copy, nonatomic) NSDictionary *globalHandlerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedRegistry;

/* instance methods */
- (void)setHandlerMap:(id)map forCardName:(id)name;
- (id)handleViewEvent:(id)event context:(id)context;
- (id)_handlerForEventType:(id)type cardType:(id)type;

@end

#endif /* TUICardViewEventHandlerRegistry_h */
