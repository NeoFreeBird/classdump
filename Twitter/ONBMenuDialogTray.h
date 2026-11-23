//
#ifndef ONBMenuDialogTray_h
#define ONBMenuDialogTray_h
@import Foundation;

@class NSObject;

@interface ONBMenuDialogTray : NSObject // (Swift)

/* class methods */
+ (id)makeTrayWithSubtask:(id)subtask subtaskDataProvider:(id)provider onActivateLink:(id /* block */)link;

/* instance methods */
- (id)init;

@end

#endif /* ONBMenuDialogTray_h */
