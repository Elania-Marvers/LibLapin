<div class="prototype">
  $Tbool@ $Sbunny_sound_manager_play_sound@(
  $Tt_bunny_sound_manager@ *$Ssound_manager@,
  $Tt_bunny_effect@ *$Ssound@
  );
</div>
<hr />

<div class="resume">
  <h3>Description</h3>
  $A Play the sent sound that must be a registered sound
  in the sent sound manager.
</div>
<hr />

<div class="parameters">
  <h3>Parameters</h3>
  <ul>
    <li>
      $Tt_bunny_sound_manager@ $Ssound_manager@:<br />
      $A The sound manager in which the effect was added.
    </li>
    <li>
      $Tt_bunny_effect@ *$Ssound@:<br />
      $A The sound to play.
    </li>
  </ul>
</div>
<hr />

<div class="return">
  <h3>Return value</h3>
  <p>
    Return $Ctrue@ if the effect was found and played.
  </p>
</div>
<hr />

<div class="related_functions">
  <h3>Related functions</h3>
  <ul>
    <li>bunny_sound_manager_play_music</li>
    <li>bunny_sound_manager_stop_music</li>
    <li>bunny_sound_manager_stop_sound</li>
  </ul>
</div>

