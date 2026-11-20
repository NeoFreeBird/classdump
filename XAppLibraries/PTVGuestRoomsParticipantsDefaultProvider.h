//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestRoomsParticipantsDefaultProvider_h
#define PTVGuestRoomsParticipantsDefaultProvider_h
@import Foundation;

#include "PTVGuestRoomParticipantsProvider-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface PTVGuestRoomsParticipantsDefaultProvider : NSObject <PTVGuestRoomParticipantsProvider>

@property (copy, nonatomic) NSDictionary *lastRefreshDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)fetchParticipantsWithProviderContext:(id)context completion:(id /* block */)completion;
- (void)_ptv_handleRefreshDictionary:(id)dictionary providerContext:(id)context completion:(id /* block */)completion;

@end

#endif /* PTVGuestRoomsParticipantsDefaultProvider_h */
