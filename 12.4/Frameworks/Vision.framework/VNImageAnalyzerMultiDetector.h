//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerMultiDetector : VNDetector
{
    unsigned long long _model;
    shared_ptr_eb20c8f2 _defaultSceneClassificationHierarchicalModel;
    struct shared_ptr<vision::mod::ImageAnalyzer> _imageAnalyzer;
}

+ (shared_ptr_eb20c8f2)createHierarchicalModelForMultiDetectorModel:(unsigned long long)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;
+ (unsigned long long)modelForRequestDetectionLevel:(unsigned long long)arg1;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (id)configurationOptionKeysForDetectorKey;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allSceneLabels;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (_Bool)_getLeafSceneObservations:(id *)arg1 hierarchySceneObservations:(id *)arg2 of32BGRAImageInPixelBufferProvidedByBlock:(CDUnknownBlockType)arg3 withOptions:(id)arg4 error:(id *)arg5;
- (id)_observationsForScene:(_Bool)arg1 sceneprint:(_Bool)arg2 includingLabelsAndConfidences:(_Bool)arg3 aesthetics:(_Bool)arg4 saliencyHeatMap:(_Bool)arg5 of32BGRAImageInPixelBufferProvidedByBlock:(CDUnknownBlockType)arg6 withOptions:(id)arg7 originalImageSize:(struct CGSize)arg8 regionOfInterest:(struct CGRect)arg9 error:(id *)arg10;
- (_Bool)_performAnalysis:(unsigned int)arg1 on32BGRAImageInPixelBufferProvidedByBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)_saliencyObservationsForLastAnalysisWithRegionOfInterest:(struct CGRect)arg1 originalImageSize:(struct CGSize)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_aestheticsObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (id)_sceneprintObservationsForLastAnalysisIncludingLabelsAndConfidencesInSceneprint:(_Bool)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_sceneObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)_populateLeafSceneObservations:(id)arg1 hierarchySceneObservations:(id)arg2 forLastAnalysisWithOptions:(id)arg3 error:(id *)arg4;
- (void)_addClassificationObservationsForSceneRequestRevisionNumber:(unsigned long long)arg1 toArray:(id)arg2 fromSceneLabelsAndConfidences:(const vector_a3c5a2fc *)arg3;
- (unsigned int)_analysisTypeForScene:(_Bool)arg1 sceneprint:(_Bool)arg2 includingLabelsAndConfidences:(_Bool)arg3 aesthetics:(_Bool)arg4 saliencyHeatMap:(_Bool)arg5;
- (void)_tileRect:(struct CGRect)arg1 horizontally:(_Bool)arg2 vertically:(_Bool)arg3 windowAspectRatio:(double)arg4 overlapPercentage:(double)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromCropRect:(struct CGRect)arg1 ofImageBuffer:(id)arg2 forNetworkInputImageSize:(struct _Geometry2D_size2D_)arg3 imageCropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 forNetworkInputImageSize:(struct _Geometry2D_size2D_)arg2 imageCropAndScaleOption:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;

@end

