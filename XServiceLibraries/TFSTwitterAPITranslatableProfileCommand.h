//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPITranslatableProfileCommand_h
#define TFSTwitterAPITranslatableProfileCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPITranslatableProfileCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (readonly, nonatomic) long long profileUserID;
@property (readonly, copy, nonatomic) NSString *apiLanguageCode;
@property (readonly, copy, nonatomic) NSString *translationSource;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id profileUserID:(long long)id apiLanguageCode:(id)code translationSource:(id)source source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPITranslatableProfileCommand_h */
