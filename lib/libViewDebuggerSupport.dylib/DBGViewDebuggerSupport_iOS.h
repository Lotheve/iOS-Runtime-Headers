/* Generated by RuntimeBrowser
   Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib
 */

@interface DBGViewDebuggerSupport_iOS : DBGViewDebuggerSupport <DBGViewDebuggerSubclass>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)_isEffectView:(id)arg1;
+ (id)_messagesUIExtensionViews;
+ (id)_renderEffectViewUsingDrawHierarchyInRect:(id)arg1;
+ (BOOL)_viewHasAmbiguousLayout:(id)arg1;
+ (void)addFrameBasics:(id)arg1 toDict:(id)arg2;
+ (void)addLayoutInfoForView:(id)arg1 toDict:(id)arg2;
+ (void)addViewBasics:(id)arg1 toDict:(id)arg2;
+ (id)additionalRootLevelViewsToArchive;
+ (unsigned int)ambiguityStatusMaskForView:(id)arg1;
+ (id)appWindows;
+ (id)displayNameForView:(id)arg1;
+ (float)firstBaselineOffsetFromTopForView:(id)arg1;
+ (BOOL)ibShouldIgnoreScrollableContentHeightAmbiguityForRepresentationOfItem:(id)arg1;
+ (BOOL)ibShouldIgnoreScrollableContentWidthAmbiguityForRepresentationOfItem:(id)arg1;
+ (BOOL)isHiddenForWindow:(id)arg1;
+ (BOOL)isInterestingLayer:(id)arg1;
+ (BOOL)isViewSubclass:(id)arg1;
+ (BOOL)isWindowSubclass:(id)arg1;
+ (float)lastBaselineOffsetFromBottomForView:(id)arg1;
+ (id)layerForView:(id)arg1;
+ (id)primaryWindowFromWindows:(id)arg1;
+ (float)screenBackingScaleForView:(id)arg1;
+ (float)screenBackingScaleForWindow:(id)arg1;
+ (id)snapshotMethodForView:(id)arg1;
+ (id)snapshotView:(id)arg1 errorString:(id*)arg2;
+ (id)subviewsForView:(id)arg1;
+ (id)titleForWindow:(id)arg1;
+ (id)viewForFirstBaselineLayoutPointerForView:(id)arg1;
+ (id)viewForLastBaselineLayoutPointerForView:(id)arg1;
+ (id)windowContentViewForWindow:(id)arg1;

@end
