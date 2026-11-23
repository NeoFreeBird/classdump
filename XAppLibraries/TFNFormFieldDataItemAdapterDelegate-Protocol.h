//
#ifndef TFNFormFieldDataItemAdapterDelegate_Protocol_h
#define TFNFormFieldDataItemAdapterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNFormFieldDataItemAdapterDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)formFieldAdapter:(id)adapter didBeginEditingForItem:(id)item;
- (void)formFieldAdapter:(id)adapter didBeginEditingForItem:(id)item;
- (void)formFieldAdapter:(id)adapter didEndEditingForItem:(id)item;
- (void)formFieldAdapter:(id)adapter didEndEditingForItem:(id)item;
- (void)formFieldAdapter:(id)adapter didSelectNextForItem:(id)item;
- (void)formFieldAdapter:(id)adapter didSelectNextForItem:(id)item;
- (void)formFieldAdapter:(id)adapter didChangeBadgeType:(long long)type forItem:(id)item;
- (void)formFieldAdapter:(id)adapter didChangeBadgeType:(long long)type forItem:(id)item;
- (void)formFieldAdapter:(id)adapter didUpdateVisibilityForItems:(id)items;
- (void)formFieldAdapter:(id)adapter didUpdateVisibilityForItems:(id)items;

@end

#endif /* TFNFormFieldDataItemAdapterDelegate_Protocol_h */
