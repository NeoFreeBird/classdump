//
#ifndef NSItemProviderWriting_Protocol_h
#define NSItemProviderWriting_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray;

@protocol NSItemProviderWriting <NSObject>

@required

@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

/* class methods */
+ (id)writableTypeIdentifiersForItemProvider;

/* required instance methods */
- (id)loadDataWithTypeIdentifier:(id)identifier forItemProviderCompletionHandler:(id /* block */)handler;

@optional

@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

/* optional instance methods */
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)identifier;

@end

#endif /* NSItemProviderWriting_Protocol_h */
