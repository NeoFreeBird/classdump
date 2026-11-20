//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSItemProviderReading_Protocol_h
#define NSItemProviderReading_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol NSItemProviderReading <NSObject>

@required

@property (class, nonatomic, readonly) NSArray *readableTypeIdentifiersForItemProvider;

/* class methods */
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)data typeIdentifier:(id)identifier error:(id *)error;
+ (id)objectWithItemProviderData:(id)data typeIdentifier:(id)identifier error:(id *)error;

@optional

@end

#endif /* NSItemProviderReading_Protocol_h */
