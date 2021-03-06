//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLModel.h>

@class NSObject;
@protocol MLCustomModel;

__attribute__((visibility("hidden")))
@interface MLCustomModelWrapper : MLModel
{
    NSObject<MLCustomModel> *_customModel;
}

@property(retain) NSObject<MLCustomModel> *customModel; // @synthesize customModel=_customModel;
- (void).cxx_destruct;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(id)arg1 customModel:(id)arg2 configuration:(id)arg3;

@end

