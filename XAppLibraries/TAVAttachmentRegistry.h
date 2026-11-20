//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAttachmentRegistry_h
#define TAVAttachmentRegistry_h
@import Foundation;

@class NSMapTable, NSObject;

@interface TAVAttachmentRegistry : NSObject

@property (readonly, nonatomic) NSMapTable *hosts;

/* instance methods */
- (id)init;
- (void)registerHost:(id)host priority:(long long)priority;
- (void)unregisterHost:(id)host;
- (id)highestRankedHost;

@end

#endif /* TAVAttachmentRegistry_h */
