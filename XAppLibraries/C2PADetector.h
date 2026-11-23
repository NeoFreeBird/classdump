//
#ifndef C2PADetector_h
#define C2PADetector_h
@import Foundation;

@class NSObject;

@interface C2PADetector : NSObject // (Swift)

/* class methods */
+ (id)detectWithFileURL:(id)url;
+ (id)detectWithFileURL:(id)url mimeType:(id)type;
+ (id)detectWithFileURL:(id)url mimeType:(id)type exemptedSoftwareAgents:(id)agents;
+ (id)detectWithData:(id)data mimeType:(id)type;
+ (id)detectWithData:(id)data mimeType:(id)type exemptedSoftwareAgents:(id)agents;
+ (_Bool)isAIGeneratedWithFileURL:(id)url;
+ (_Bool)isAIGeneratedWithData:(id)data mimeType:(id)type;
+ (id)mimeTypeForFileExtension:(id)extension;

/* instance methods */
- (id)init;

@end

#endif /* C2PADetector_h */
