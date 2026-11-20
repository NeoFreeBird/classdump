//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWorkClientWithCompletion_h
#define PTVWorkClientWithCompletion_h
@import Foundation;

#include "PTVWorkClientDelegate-Protocol.h"

@class NSObject, NSString;

@interface PTVWorkClientWithCompletion : NSObject <PTVWorkClientDelegate>

@property (retain, nonatomic) id context;
@property (copy, nonatomic) id /* block */ load;
@property (copy, nonatomic) id /* block */ immediate;
@property (copy, nonatomic) id /* block */ eventual;
@property (copy, nonatomic) id /* block */ error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;

@end

#endif /* PTVWorkClientWithCompletion_h */
