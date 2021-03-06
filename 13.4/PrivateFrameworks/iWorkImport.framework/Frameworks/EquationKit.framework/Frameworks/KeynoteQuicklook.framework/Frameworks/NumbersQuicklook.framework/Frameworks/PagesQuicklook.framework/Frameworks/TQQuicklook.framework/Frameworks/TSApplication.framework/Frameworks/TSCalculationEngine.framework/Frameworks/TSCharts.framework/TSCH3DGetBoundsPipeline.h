//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSCharts/TSCH3DSceneRenderPipeline.h>

@interface TSCH3DGetBoundsPipeline : TSCH3DSceneRenderPipeline
{
}

+ (id)pipelineWithScene:(id)arg1;
+ (id)pipelineWithScene:(id)arg1 renderProcessor:(id)arg2;
- (_Bool)run;
- (void)getBounds:(id)arg1;
- (void)p_replaceSceneOfPipeline:(id)arg1 replacement:(id)arg2 duringBlock:(CDUnknownBlockType)arg3;
- (void)getProjectedBounds:(id)arg1;
- (void)get3DBounds:(id)arg1;
- (void)runScene:(id)arg1 selector:(SEL)arg2;
- (void)setObjectRenderMode:(int)arg1;
- (void)set2DProjectedRenderingMode:(_Bool)arg1;
- (_Bool)useIndividualBounds;
- (void)extend2DProjectedBounds:(const box_a3bd9649 *)arg1;
- (void)resetBounds;
@property(readonly, nonatomic) const struct ObjectBounds *bounds;
- (id)boundsProcessor;
- (id)initWithScene:(id)arg1;
- (id)initWithScene:(id)arg1 renderProcessor:(id)arg2;
- (_Bool)shouldSkipLabelsIfHidden;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;

@end

