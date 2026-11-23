//
#ifndef _TtC13XFaceLiveness20XFaceLivenessStartup_h
#define _TtC13XFaceLiveness20XFaceLivenessStartup_h
@import Foundation;

@class NSObject;

@interface XFaceLiveness.XFaceLivenessStartup : NSObject // (Swift)

/* class methods */
+ (void)startWithSessionID:(id)id resultsValidator:(id /* block */)validator scribeProvider:(id)provider onSuccess:(id /* block */)success;
+ (void)startWithSessionID:(id)id onSuccess:(id /* block */)success;

/* instance methods */
- (id)init;

@end

#endif /* _TtC13XFaceLiveness20XFaceLivenessStartup_h */
