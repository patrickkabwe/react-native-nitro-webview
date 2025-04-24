import React, {useState} from 'react';
import {ActivityIndicator, StyleSheet, View} from 'react-native';
import WebView from 'react-native-nitro-webview';

function App(): React.JSX.Element {
  const [isInitializing, setIsInitializing] = useState(true);

  return (
    <View style={styles.container}>
      {isInitializing && (
        <View style={styles.loadingContainer}>
          <ActivityIndicator size="large" color="#0000ff" />
        </View>
      )}

      <WebView
        style={styles.view}
        sourceUrl="https://www.nowietech.com"
        onScriptLoaded={() => {
          console.log('script loaded');
          setIsInitializing(false);
        }}
      />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
  },
  view: {
    flex: 1,
    width: '100%',
    height: '100%',
  },
  loadingContainer: {
    flex: 1,
    position: 'absolute',
    top: 0,
    left: 0,
    right: 0,
    bottom: 0,
    zIndex: 1000,
    justifyContent: 'center',
    alignItems: 'center',
    backgroundColor: 'white',
  },
});

export default App;
