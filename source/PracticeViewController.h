//
//  PracticeViewController.h
//  EarConditioner iOS
//
//  Created by Maurizio Frances on 22/01/14.
//  Copyright (c) 2014 Michael Norris. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PracticeSummaryViewController.h"
@class MNBaseSequence;
@class MNMusicSequence;


@interface PracticeViewController : UIViewController <PracticeSummaryVC>

-(IBAction)playRandomMelody:(id)sender;
-(IBAction)replayMelody:(id)sender;
-(IBAction)replayHalfMelody:(id)sender;
-(IBAction)replayHalfMelodyWithChange:(id)sender;


@property (nonatomic, strong) MNBaseSequence *questionBaseSequence;
@property (nonatomic, strong) IBOutlet UITextView *textView;
@property (nonatomic, strong) IBOutlet UIImageView *imageView;

@property int dynamicProfile,oldMode1,oldMode2,oldEnum1,oldEnum2,barStartForHalfMelody;
@property float timeStartForHalfMelody,durationOfHalfMelody;
@property (nonatomic, strong) MNMusicSequence *questionHalfMusicSequence;
@property (nonatomic, strong) MNMusicSequence *questionHalfWithChangeMusicSequence;

//NEW CODE

@property int timeSigEnum, mode, melodyDirection, isPitchChange, questionNumber, answer1, answer2;
@property NSMutableArray *scoreSheet;
@property NSMutableArray *attemptSheet;


@property BOOL retryingQuestion;
@property BOOL transitionFinished;
@property BOOL answeredQuestion;


@property (weak, nonatomic) IBOutlet UILabel *subtitleLbl;
@property (weak, nonatomic) IBOutlet UILabel *questionInfoLbl;

@property (weak, nonatomic) IBOutlet UILabel *questionLbl;
@property (weak, nonatomic) IBOutlet UIImageView *quizProgressImg;
@property (weak, nonatomic) IBOutlet UIButton *checkAnswerBtn;
@property (weak, nonatomic) IBOutlet UIButton *summaryBtn;
@property (weak, nonatomic) IBOutlet UILabel *playButtonLbl;
@property (weak, nonatomic) IBOutlet UILabel *playButton2Lbl;

@property (weak, nonatomic) IBOutlet UIView *buttonGroup1;
@property (weak, nonatomic) IBOutlet UIView *buttonGroup2;
@property (weak, nonatomic) IBOutlet UIView *buttonGroup3;
@property (weak, nonatomic) IBOutlet UIView *buttonGroup3_part1;
@property (weak, nonatomic) IBOutlet UIView *buttonGroup3_part2;

@property (weak, nonatomic) IBOutlet UIView *buttonGroup4;
@property (weak, nonatomic) IBOutlet UIImageView *answerFlag;
@property (weak, nonatomic) IBOutlet UIImageView *answerFlag2;
@property (weak, nonatomic) IBOutlet UIButton *prevModuleBtn;
@property (weak, nonatomic) IBOutlet UIButton *nextModuleBtn;

-(void) generateRandomMelody;
-(void) generateHalfMelody;
-(void) generateHalfMelodyWithChange;
-(void) playMelody;
-(void) playHalfMelody;
-(void) playHalfMelodyWithChange;
-(void) displayQuestion;
-(void) displayButtonGroup;
-(void) displayModuleButtons;
-(void) checkAnswerWith:(int)answer1 And:(int)answer2;
-(void) nextQuestion;
-(void) deselectAllButtons;
-(void) showSelectedButton: (id)sender;

-(void) disableAllAnswers;
-(void) enableAllAnswers;


-(void) setAnswerFlagIs:(int)correct;
-(void) setAnswerFlag2Is:(int)correct;


-(void) setToQuestion:(int)Number;
-(void) retryAllWithNewMelody;
-(void) retryAllWithSameMelody;


- (IBAction)clickAnswer1:(id)sender;
- (IBAction)clickAnswer2:(id)sender;

- (IBAction)clickCheckAnswer:(id)sender;
- (IBAction)clickSummaryPage:(id)sender;

- (IBAction)clickQuitTest:(id)sender;

- (IBAction)clickPlayMelody1:(id)sender;
- (IBAction)clickPlayMelody2:(id)sender;

- (IBAction)clickPrevModule:(id)sender;
- (IBAction)clickNextModule:(id)sender;
- (IBAction)swipeRight:(id)sender;
- (IBAction)swipeLeft:(id)sender;
@end
