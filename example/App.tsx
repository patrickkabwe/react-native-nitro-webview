import React from 'react';
import { Text, View, StyleSheet } from 'react-native';
import { NitroWebview } from 'react-native-nitro-webview';

function App(): React.JSX.Element {
  return (
    <View style={styles.container}>
        <NitroWebview isRed={true} style={styles.view} />
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
    width: 200,
    height: 200
  }});

export default App;