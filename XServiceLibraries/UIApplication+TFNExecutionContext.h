//
#ifndef UIApplication_TFNExecutionContext_h
#define UIApplication_TFNExecutionContext_h
@import Foundation;

@interface UIApplication (TFNExecutionContext) <TFNExecutionContext>

/* instance methods */
- (id)activeAnyWindow;
- (id)activeSceneWindow;
- (id)_tfn_activeWindowForScene:(_Bool)scene;
- (id)sceneWindowForWindow:(id)window;
- (id)delegateWindow;
- (id)currentFirstResponder;
- (_Bool)isFullscreen;
- (_Bool)supportsWindows;
- (_Bool)isDragAndDropEnabled;
- (_Bool)supportsHorizontalRegularSizeClass;
- (id)tfn_screenWindow;

@end

#endif /* UIApplication_TFNExecutionContext_h */
