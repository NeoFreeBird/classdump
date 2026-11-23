//
#ifndef TFNCircularCountProgressDataSource_Protocol_h
#define TFNCircularCountProgressDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNCircularCountProgressDataSource <NSObject>

@required

/* required instance methods */
- (long long)currentCharacterCountForCircularCountProgressView:(id)view;
- (long long)remainingCharacterCountForCircularCountProgressView:(id)view;
- (long long)warningCharacterLimitForCircularCountProgressView:(id)view;

@optional

@end

#endif /* TFNCircularCountProgressDataSource_Protocol_h */
